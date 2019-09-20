
        
        def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
                c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
        GLOBAL_TEMPLATE_TYPES = {
      gitignores: {
        gitlab_version: 8.8
      },
      gitlab_ci_ymls: {
        gitlab_version: 8.9
      },
      dockerfiles: {
        gitlab_version: 8.15
      }
    }.freeze
    
            @filter_options[:encode_binary] ? encode_binary(result) : result
      end
    end
  end
end

    
            desc 'Denies an access request for the given user.' do
          detail 'This feature was introduced in GitLab 8.11.'
        end
        params do
          requires :user_id, type: Integer, desc: 'The user ID of the access requester'
        end
        # rubocop: disable CodeReuse/ActiveRecord
        delete ':id/access_requests/:user_id' do
          source = find_source(source_type, params[:id])
          member = source.requesters.find_by!(user_id: params[:user_id])
    
            desc 'Gets a badge of a #{source_type}.' do
          detail 'This feature was introduced in GitLab 10.6.'
          success Entities::Badge
        end
        params do
          requires :badge_id, type: Integer, desc: 'The badge ID'
        end
        get ':id/badges/:badge_id' do
          source = find_source(source_type, params[:id])
          badge = find_badge(source)
    
          desc 'Enable a deploy key for a project' do
        detail 'This feature was added in GitLab 8.11'
        success Entities::SSHKey
      end
      params do
        requires :key_id, type: Integer, desc: 'The ID of the deploy key'
      end
      post ':id/deploy_keys/:key_id/enable' do
        key = ::Projects::EnableDeployKeyService.new(user_project,
                                                      current_user, declared_params).execute
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
    module Sinatra
  # Sinatra::ShowExceptions catches all exceptions raised from the app it
  # wraps. It shows a useful backtrace with the sourcefile and clickable
  # context, the whole Rack environment and the request data.
  #
  # Be careful when you use this on public-facing sites as it could reveal
  # information helpful to attackers.
  class ShowExceptions < Rack::ShowExceptions
    @@eats_errors = Object.new
    def @@eats_errors.flush(*) end
    def @@eats_errors.puts(*) end
    
    desc 'run specs'
task(:spec) { ruby '-S rspec spec' }
    
        it 'redirects requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/')
    end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def option_value_params
          params.require(:option_value).permit(permitted_option_value_attributes)
        end
      end
    end
  end
end

    
            def return_authorization_params
          params.require(:return_authorization).permit(permitted_return_authorization_attributes)
        end
      end
    end
  end
end

    
            def update
          authorize! :update, taxonomy
          if taxonomy.update(taxonomy_params)
            respond_with(taxonomy, status: 200, default_template: :show)
          else
            invalid_resource!(taxonomy)
          end
        end
    
              @users = if params[:ids]
                     @users.ransack(id_in: params[:ids].split(','))
                   else
                     @users.ransack(params[:q])
                   end
    
          q.clear
      assert SetWorker.perform_async(1)
      assert_equal 0, q.size
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'fr-FR,fr;q=0.8,en-US;q=0.6,en;q=0.4,ru;q=0.2')
    assert_equal 'fr', obj.locale
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
          Sidekiq::Testing.disable! do
        refute Sidekiq::Testing.fake?
        assert Sidekiq::Testing.disabled?
      end