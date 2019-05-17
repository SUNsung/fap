
        
            # /RAND/../RAND../
    if self.junk_directories
      str.gsub!(/\//) {
        dirs = ''
        (rand(5)+5).times {
          dirs << '/' + Rex::Text.rand_text_alpha(rand(5) + 1) + '/..'
        }
        dirs + '/'
      }
    end
    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5