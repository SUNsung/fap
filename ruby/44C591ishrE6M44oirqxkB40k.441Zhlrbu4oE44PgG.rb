
        
          def all_projects(current_user)
    projects = []
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
        def inheritable_copy
      self.class.new @filters
    end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
      def ruby_bin
    File.join(RbConfig::CONFIG['bindir'], RbConfig::CONFIG['ruby_install_name'])
  end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
              add_offense(node)
        end