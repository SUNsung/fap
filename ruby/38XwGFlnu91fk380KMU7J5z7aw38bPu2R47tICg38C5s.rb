
        
              def name
        @name || super.demodulize
      end
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def process_response?(response)
      response.body.present?
    end
    
          def to_proc
        method(:call).to_proc
      end
    end
  end
end

    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
end

    
          # Returns the keyword of the `case` statement as a string.
      #
      # @return [String] the keyword of the `case` statement
      def keyword
        'case'
      end