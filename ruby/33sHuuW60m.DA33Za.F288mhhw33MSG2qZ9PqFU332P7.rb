
        
        def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
    
      puts 'bundle_id\tapp_name\n'
  puts '--------------------------------------\n'
  puts running.to_a.sort
end
    
            def name
          @node.children.first
        end
    
            def nested_comparison?(node)
          if node.or_type?
            node.node_parts.all? { |node_part| comparison? node_part }
          else
            false
          end
        end
    
                end
          RUBY
        end
      end