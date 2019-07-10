
        
              dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
              augmentation = if scope.node.lambda?
                           message_for_lambda(variable, all_arguments)
                         else
                           message_for_normal_block(variable, all_arguments)
                         end
    
        config.cache_store = :null_store
  end