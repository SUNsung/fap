        # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
                # Break out if we're supposed to. Otherwise re-raise the error
            # because it is a real problem.
            break if breakable
            raise
          end
        end
    
            # Render a given string and return the result. This method optionally
        # takes a block which will be passed the renderer prior to rendering, which
        # allows the caller to set any view variables within the renderer itself.
        #
        # @param [String] template The template data string.
        # @return [String] Rendered template
        def render_string(*args)
          render_with(:render_string, *args)
        end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.
    
        it 'returns false if osxfuse include directory is a symlink' do
      allow(File).to receive(:exist?).and_return(true)
      allow(File).to receive(:symlink?).and_return(true)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
    module RuboCop
  module Cop
    class VariableForce
      # This class represents each assignment of a variable.
      class Assignment
        include Branchable
    
          def with_temp_variable
        yield 'temp#{next_temp_value}'
      end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)