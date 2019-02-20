
        
              it 'works given the path to compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json'
            )
          end').runner.execute(:test)
    
          if description
        UI.user_error!('Do not let descriptions end with a '.', since it's used for user inputs as well for key :#{key}') if description[-1] == '.'
      end
    
                expect(FastlaneCore::UI).to receive(:input).and_return('val ask')
            expect(config[:item]).to eq('val ask')
          end
        end
      end
    end
  end
end

    
    exec_arr = ['fastlane', tool_name] + ARGV
    
            c.action do |args, options|
          Cert.config = FastlaneCore::Configuration.create(Cert::Options.available_options, options.__hash__)
          Cert::Runner.new.revoke_expired_certs!
        end
      end
    
        ['d', 'i', 'u'].each do |f|
      describe f do
        it 'converts argument as a decimal number' do
          format('%#{f}', 112).should == '112'
          format('%#{f}', -112).should == '-112'
        end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `when` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `when` nodes within RuboCop.
    class WhenNode < Node
      # Returns an array of all the conditions in the `when` branch.
      #
      # @return [Array<Node>] an array of condition nodes
      def conditions
        node_parts[0...-1]
      end