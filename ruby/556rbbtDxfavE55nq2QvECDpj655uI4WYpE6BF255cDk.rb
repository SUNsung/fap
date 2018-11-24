
        
                  pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
            client.each_page(collection_method, repo, options) do |page|
          # Technically it's possible that the same work is performed multiple
          # times, as Sidekiq doesn't guarantee there will ever only be one
          # instance of a job. In such a scenario it's possible for one job to
          # have a lower page number (e.g. 5) compared to another (e.g. 10). In
          # this case we skip over all the objects until we have caught up,
          # reducing the number of duplicate jobs scheduled by the provided
          # block.
          next unless page_counter.set(page.number)
    
            # Builds a note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_TYPE_REGEX)
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    end
    
      # Keys that should be case-insensitive.
  mattr_accessor :case_insensitive_keys
  @@case_insensitive_keys = [:email]
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
          protected
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
    
module OctopressLiquidFilters
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
                  dst = Tempfile.new([basename, dst_format])
              dst.binmode