
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            force: true
          })
        end').runner.execute(:test)
    
          it 'adds no_create_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            no_create_docset: true
          )
        end').runner.execute(:test)
    
    class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
          it 'keeps the specified metadata folder' do
        expect(options[:metadata_path]).to eq('./metadata')
      end
    end
  end
end

    
        def resource_params
      params.require(:user).permit(
        :unconfirmed_email
      )
    end
  end
end

    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      def verified_domain
    return signed_request_account.domain if signed_request_account
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
        @web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data_params,
      user_id: current_user.id,
      access_token_id: doorkeeper_token.id
    )
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      private
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
    require 'tmuxinator'
require 'factory_bot'
    
      describe '#default?' do
    let(:directory) { described_class.directory }
    let(:local_default) { described_class::LOCAL_DEFAULT }
    let(:proj_default) { described_class.default }
    
          it 'force detach renders the project without attach code' do
        ARGV.replace(['debug', '--attach=false', 'sample'])
        capture_io { cli.start }
        # Currently no project is rendered at all
        # expect(out).to_not include 'attach-session'
      end
    
    describe Tmuxinator::WemuxSupport do
  let(:klass) { Class.new }
  let(:instance) { klass.new }
    
      s.add_development_dependency 'activesupport', '< 5.0.0' # Please see issue #432
  s.add_development_dependency 'awesome_print', '~> 1.2'
  s.add_development_dependency 'bundler', '>= 1.3'
  s.add_development_dependency 'coveralls', '~> 0.8'
  s.add_development_dependency 'factory_bot', '~> 4.8'
  s.add_development_dependency 'pry', '~> 0.10'
  s.add_development_dependency 'rake', '~> 10.4'
  s.add_development_dependency 'rspec', '~> 3.3'
  s.add_development_dependency 'rubocop', '~> 0.48.1'
  s.add_development_dependency 'simplecov', '~> 0.16'
    
    Then 'I should see a group {string} with the scopes {string} and {string}' do |group, name1, name2|
  group = group.tr(' ', '').underscore.downcase
  name1 = name1.tr(' ', '').underscore.downcase
  name2 = name2.tr(' ', '').underscore.downcase
  expect(page).to     have_css '.scopes .scope-group-#{group} .#{name1}'
  expect(page).to     have_css '.scopes .scope-group-#{group} .#{name2}'
end
    
      end
    
                default_title = render_or_call_method_or_proc_on(self, batch_action.title)
            title = I18n.t('active_admin.batch_actions.labels.#{batch_action.sym}', default: default_title)
            label = I18n.t('active_admin.batch_actions.action_label', title: title)
    
        def self.controllers
      {
        sessions: 'active_admin/devise/sessions',
        passwords: 'active_admin/devise/passwords',
        unlocks: 'active_admin/devise/unlocks',
        registrations: 'active_admin/devise/registrations',
        confirmations: 'active_admin/devise/confirmations'
      }
    end