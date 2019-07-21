
        
            // change element at index 1 (second element) to 'second'
    array.at(1) = 'second';
    
        // output element with JSON pointer '/number'
    std::cout << j.at('/number'_json_pointer) << '\n';
    // output element with JSON pointer '/string'
    std::cout << j.at('/string'_json_pointer) << '\n';
    // output element with JSON pointer '/array'
    std::cout << j.at('/array'_json_pointer) << '\n';
    // output element with JSON pointer '/array/1'
    std::cout << j.at('/array/1'_json_pointer) << '\n';
    
        // out_of_range.403
    try
    {
        // try to use a JSON pointer to an nonexistent object key
        json::const_reference ref = j.at('/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }