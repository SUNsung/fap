
        
          def revoke_admin!
    set_permission('admin', false)
  end
    
      class CachedFragment
    def initialize(json)
      @json = json
    end
    def as_json(*_args)
      @json
    end
  end
    
          def stack
        UI::ErrorReport.stack
      end
    
          # @param  [Xcodeproj::Project] project
      #         The xcode project to generate a podfile for.
      #
      # @return [String] the text of the Podfile for the provided project
      #
      def podfile_template(project)
        podfile = ''
        podfile << 'project '#{@project_path}'\n\n' if @project_path
        podfile << <<-PLATFORM.strip_heredoc
          # Uncomment the next line to define a global platform for your project
          # platform :ios, '9.0'
        PLATFORM
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
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
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?