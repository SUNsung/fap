
        
              def parallel?
        @parallel
      end
    
            def representation_class
          Representation::Issue
        end
    
            def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
            def sidekiq_worker_class
          ImportNoteWorker
        end
    
    module Gitlab
  module GithubImport
    # IssuableFinder can be used for caching and retrieving database IDs for
    # issuable objects such as issues and pull requests. By caching these IDs we
    # remove the need for running a lot of database queries when importing
    # GitHub projects.
    class IssuableFinder
      attr_reader :project, :object
    
    module Gitlab
  module GithubImport
    module Representation
      class Note
        include ToHash
        include ExposeAttribute
    
            def state
          if merged_at
            :merged
          else
            attributes[:state]
          end
        end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
            self
      end
    
    Given /^I run a rails generator to generate a '([^']*)' scaffold with '([^']*)'$/ do |model_name, attributes|
  step %[I successfully run `rails generate scaffold #{model_name} #{attributes}`]
end
    
    module WithinHelpers
  def with_scope(locator)
    locator ? within(*selector_for(locator)) { yield } : yield
  end
end
World(WithinHelpers)