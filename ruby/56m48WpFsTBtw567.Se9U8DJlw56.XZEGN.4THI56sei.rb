
        
                def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    # HTTP client for interacting with the GitHub API.
    #
    # This class is basically a fancy wrapped around Octokit while adding some
    # functionality to deal with rate limiting and parallel imports. Usage is
    # mostly the same as Octokit, for example:
    #
    #     client = GithubImport::Client.new('hunter2')
    #
    #     client.labels.each do |label|
    #       puts label.name
    #     end
    class Client
      include ::Gitlab::Utils::StrongMemoize
    
            def id_for_already_imported_cache(issue)
          issue.number
        end
    
            def importer_class
          NoteImporter
        end
    
          # Returns the ID to use for the cache used for checking if an object has
      # already been imported or not.
      #
      # object - The object we may want to import.
      def id_for_already_imported_cache(object)
        raise NotImplementedError
      end
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
      def destroy
    unless current_user.authenticate(params[:password])
      respond_to do |wants|
        wants.html { redirect_to organization_delete_path(@organization), :alert => 'The password you entered was not valid. Please check and try again.' }
        wants.json { render :json => {:alert => 'The password you entered was invalid. Please check and try again.'} }
      end
      return
    end
    
      def index
    @users = organization.organization_users.where(:user_type => 'User').includes(:user).to_a.sort_by { |u| '#{u.user.first_name}#{u.user.last_name}'.upcase }
    @pending_users = organization.organization_users.where(:user_type => 'UserInvite').includes(:user).to_a.sort_by { |u| u.user.email_address.upcase }
  end