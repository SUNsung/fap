
        
          end
    
      # any user that is either a moderator or an admin
  def staff?
    admin || moderator
  end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
            # This returns all the registered host capabilities.
        #
        # @return [Hash]
        def host_capabilities
          results = Hash.new { |h, k| h[k] = Registry.new }
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          private
    
            private
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            MSG = 'Use only a single space inside array percent literal.'.freeze
        MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX =
          /(?:[\S&&[^\\]](?:\\ )*)( {2,})(?=\S)/
    
              add_offense(node)
        end
    
            private
    
          def extract_metrics(path, *keys)
        snapshot.metric_store.extract_metrics(path, *keys)
      end
    end
  end
end
