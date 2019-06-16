
        
              # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
    module Gitlab
  module GithubImport
    module Importer
      class DiffNotesImporter
        include ParallelScheduling
    
            def collection_method
          :issues
        end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
            def message_for_normal_block(variable, all_arguments)
          if all_arguments.none?(&:referenced?) &&
             !define_method_call?(variable)
            if all_arguments.count > 1
              'You can omit all the arguments if you don't care about them.'
            else
              'You can omit the argument if you don't care about it.'
            end
          else
            message_for_underscore_prefix(variable)
          end
        end
    
      # Do not fallback to assets pipeline if a precompiled asset is missed.
  config.assets.compile = false
    
      config.action_mailer.perform_caching = false