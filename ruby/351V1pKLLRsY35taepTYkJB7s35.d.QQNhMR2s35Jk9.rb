
        
        class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      let(:user) { Fabricate(:user) }
    
            def regexp_named_capture?
          @node.type == REGEXP_NAMED_CAPTURE_TYPE
        end
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_end?) (regopt)))
           (send (regexp (str $#literal_at_end?) (regopt)) {:match :=~} $_)}
        PATTERN