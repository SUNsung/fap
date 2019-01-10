
        
            def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def as_json
      @pages
    end
    
          max_length = if tag = str.slice!(/ \[.+\]\z/)
        terminal_width - tag.length
      else
        terminal_width
      end
    
          private
    
        after :each do
      @tmp_file.close
      rm_r @tmp_file
    end
    
      def self.link(title)
    title.downcase.gsub(/(?!-)\W /, '-').gsub(' ', '-').gsub(/(?!-)\W/, '')
  end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          def xor_byte_strings(s1, s2)
        s1.bytes.zip(s2.bytes).map { |(c1,c2)| c1 ^ c2 }.pack('c*')
      end
    end
  end
end

    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
        def self.with_job_hash_context(job_hash, &block)
      with_context(job_hash_context(job_hash), &block)
    end