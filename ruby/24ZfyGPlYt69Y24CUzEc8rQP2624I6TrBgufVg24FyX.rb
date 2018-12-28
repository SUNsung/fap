
        
              # Iterates over all of the objects for the given method (e.g. `:labels`).
      #
      # method - The method to send to Octokit for querying data.
      # args - Any arguments to pass to the Octokit method.
      def each_object(method, *args, &block)
        return to_enum(__method__, method, *args) unless block_given?
    
            # attributes - A Hash containing the raw lfs_object details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end