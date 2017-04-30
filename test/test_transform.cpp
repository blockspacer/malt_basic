//
// Created by Mehmet Fatih BAKIR on 30/04/2017.
//

#include <iostream>
#include "../components/transform.hpp"

namespace glm
{
    std::ostream& operator<<(std::ostream& os, const vec3& v)
    {
        return os << '(' << v.x << ", " << v.y << ", " << v.z << ')';
    }
}

int main()
{
    malt::transform t;

    std::cout << t.get_pos() << '\n';
    t.translate(glm::vec3(0, 0, 1));
    std::cout << t.get_pos() << '\n';
    t.rotate(glm::vec3(0, 90, 0));
    t.translate(glm::vec3(0, 0, 1));
    std::cout << t.get_pos() << '\n';
    t.rotate(glm::vec3(0, 180, 0));
    t.translate(glm::vec3(0, 0, 1));
    std::cout << t.get_pos() << '\n';

    std::cout << t.get_mat4() * glm::vec4(0, 0, 1, 1) << '\n';
}