
        
        module Gitlab
  module GithubImport
    module Importer
      class LfsObjectsImporter
        include ParallelScheduling
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            # We inject the page number here to make sure that all importers always
        # start where they left off. Simply starting over wouldn't work for
        # repositories with a lot of data (e.g. tens of thousands of comments).
        options = collection_options.merge(page: page_counter.current)
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            attr_reader :attributes
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end