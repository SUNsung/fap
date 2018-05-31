
        
            [@f.bin, @f.sbin, @f.lib].each { |d| clean_dir(d) if d.exist? }
    
            if msg = blacklisted?(query)
          if count > 0
            puts
            puts 'If you meant #{query.inspect} precisely:'
            puts
          end
          puts msg
        elsif count == 0
          puts 'No formula found for #{query.inspect}.'
          begin
            GitHub.print_pull_requests_matching(query)
          rescue GitHub::Error => e
            SEARCH_ERROR_QUEUE << e
          end
        end
      end
    end
    
      def updated?
    initial_revision != current_revision
  end
    
      def self.require_universal_deps
    define_method(:require_universal_deps?) { true }
  end
    
            # Otherwise, call it
        cap_host.capability(name, *argv)
    
        File.write(dest, Oj.dump(map))
    puts 'Wrote emojo to destination! (#{dest})'
  end
end
