    can?(current_user, ability_name, resource)
  end
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
    def ok_failed(condition)
  if (condition)
    puts 'OK'
  else
    puts 'FAILED'
  end
end
    
    class SinatraStaticServer < Sinatra::Base
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
            MSG = 'Do not freeze immutable objects, as freezing them has no ' \
              'effect.'.freeze