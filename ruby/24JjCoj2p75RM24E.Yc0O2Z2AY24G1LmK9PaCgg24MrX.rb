
        
          spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
    
class ScanError < StandardError; end
    
    end

    
          env['rack.errors'] = errors
    
          def session_key
        @session_key ||= options[:session_key]
      end
    end
  end
end

    
            close_body(body) if reaction
    
      it_behaves_like 'any rack application'
    
        it { expect(alias_node.old_identifier.sym_type?).to be(true) }
    it { expect(alias_node.old_identifier.children.first).to eq(:bar) }
  end
end

    
        context 'within an array literal' do
      context 'assigned to an ivar' do
        let(:src) { '@var = [a, b, c]' }
    
                add_offense(heredoc_node, location: :heredoc_end)
          else
            return if next_line_empty?(node.last_line)
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
    When /^(?:|I )check '([^']*)'$/ do |field|
  check(field)
end
    
      def self.io_adapters
    @io_adapters ||= Paperclip::AdapterRegistry.new
  end
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end