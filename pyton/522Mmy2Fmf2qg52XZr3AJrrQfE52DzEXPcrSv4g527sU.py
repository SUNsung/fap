
        
        # (c) 2015, Marc Abramowitz <marca@surveymonkey.com>
#
# This file is part of Ansible.
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible. If not, see <http://www.gnu.org/licenses/>.
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
    # Components that match a 16-bit portion of an IPv6 address in hexadecimal
# notation (0..ffff) or an 8-bit portion of an IPv4 address in decimal notation
# (0..255) or an [x:y(:z)] numeric range.
    
        terminal_length = os.getenv('ANSIBLE_VYOS_TERMINAL_LENGTH', 10000)