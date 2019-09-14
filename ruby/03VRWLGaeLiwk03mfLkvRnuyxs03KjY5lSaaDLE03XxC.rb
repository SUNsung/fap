
        
              open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
    # Use this hook to configure devise mailer, warden hooks and so forth.
# Many of these configuration options can be set straight in your model.
Devise.setup do |config|
  # The secret key used by Devise. Devise uses this key to generate
  # random tokens. Changing this key will render invalid all existing
  # confirmation, reset password and unlock tokens in the database.
  config.secret_key = AppConfig.secret_token
    
    puts 'Configuring Bundler for #{rails_env} environment and #{database} database.'
    
    class HomeController < ApplicationController
  def show
    partial_dir = Rails.root.join('app', 'views', 'home')
    if user_signed_in?
      redirect_to stream_path
    elsif request.format == :mobile
      if partial_dir.join('_show.mobile.haml').exist? ||
         partial_dir.join('_show.mobile.erb').exist? ||
         partial_dir.join('_show.haml').exist?
        render :show
      else
        redirect_to user_session_path
      end
    elsif partial_dir.join('_show.html.haml').exist? ||
          partial_dir.join('_show.html.erb').exist? ||
          partial_dir.join('_show.haml').exist?
      render :show
    elsif Role.admins.any?
      render :default
    else
      redirect_to podmin_path
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
            # Describes what makes each {PodVariant} distinct among the others.
        #
        # @return [Hash<PodVariant, String>]
        #
        def scope_suffixes
          return { variants.first => nil } if variants.count == 1
          Hash[scope_by_specs.map do |variant, scope|
            require 'digest'
            scope = Digest::MD5.hexdigest(scope)[0..7] if !scope.nil? && scope.length >= 50
            [variant, scope]
          end]
        end
    
            case a
        when 0 then 'just now'
        when 1 then 'a second ago'
        when 2..59 then a.to_s + ' seconds ago'
        when 60..119 then 'a minute ago' # 120 = 2 minutes
        when 120..3540 then (a / 60).to_i.to_s + ' minutes ago'
        when 3541..7100 then 'an hour ago' # 3600 = 1 hour
        when 7101..82_800 then ((a + 99) / 3600).to_i.to_s + ' hours ago'
        when 82_801..172_000 then 'a day ago' # 86400 = 1 day
        when 172_001..518_400 then ((a + 800) / (60 * 60 * 24)).to_i.to_s + ' days ago'
        when 518_400..1_036_800 then 'a week ago'
        when 1_036_801..4_147_204 then ((a + 180_000) / (60 * 60 * 24 * 7)).to_i.to_s + ' weeks ago'
        else date.strftime('%d %b %Y')
        end
      end
    end
  end
end

    
          it 'sets the description' do
        post '/users/api_secrets', params: { api_secret: valid_params }
        expect(user.api_secrets.last.description).to eq valid_params[:description]
      end
    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
      it 'renders a user index if there is a user with the username successfully' do
    expect(get: '/#{user.username}').to route_to(
      controller: 'stories',
      action: 'index',
      username: user.username,
    )
  end
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end