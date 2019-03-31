
        
                  pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
          # Reads an integer from the cache, or returns nil if no value was found.
      #
      # See Caching.read for more information.
      def self.read_integer(raw_key, timeout: TIMEOUT)
        value = read(raw_key, timeout: timeout)
    
          # Returns the details of a GitHub repository.
      #
      # name - The path (in the form `owner/repository`) of the repository.
      def repository(name)
        with_rate_limit { octokit.repo(name) }
      end
    
            def find_target_id
          GithubImport::IssuableFinder.new(project, issue).database_id
        end
      end
    end
  end
end

    
            def collection_method
          :issues_comments
        end
    
          # Imports all the objects in sequence in the current thread.
      def sequential_import
        each_object_to_import do |object|
          repr = representation_class.from_api_response(object)
    
            expose_attribute :noteable_type, :noteable_id, :commit_id, :file_path,
                         :diff_hunk, :author, :note, :created_at, :updated_at,
                         :github_id
    
    module Gitlab
  module QueryLimiting
    # Middleware for reporting (or raising) when a request performs more than a
    # certain amount of database queries.
    class Middleware
      CONTROLLER_KEY = 'action_controller.instance'.freeze
      ENDPOINT_KEY = 'api.endpoint'.freeze
    
      def update
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
      included do
    before_action :set_locale
  end
    
      # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        private
    
        # Returns the dot+extension of the file. e.g. '.jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension. If the extension is empty, no dot is added.
    def dotextension attachment, style_name
      ext = extension(attachment, style_name)
      ext.empty? ? ext : '.#{ext}'
    end