
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        def execute(command: nil, target_object: nil)
      action_name = command.method_name
      action_class_ref = class_ref_for_action(named: action_name)
      parameter_map = {}
      closure_argument_value = nil
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            prefix: '#{prefix}',
          })
        end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
    def clamp(f)
  i = f * 255.5
  if i > 255.0 then
    i = 255.0
  end
  if i < 0.0 then
    i = 0.0
  end
  i.to_i
end
    
    answer = to_array(solution).map do |p|
  to_string(p)
end
    
    mkpieces
mkboard
$p[4] = [$p[4][0]]
$pnum = (0...$p.length).to_a
setpiece([],0)

    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
      gem.licenses      = ['MIT']
    
        def set_if_empty(key, value=nil, &block)
      set(key, value, &block) unless keys.include?(key)
    end
    
          def response
        return @response if defined? @response
    
          def using_default_scm?
        return @using_default_scm if defined? @using_default_scm
        @using_default_scm = (fetch(:scm) == DEFAULT_GIT)
      end
    
          def with(properties)
        properties.each { |key, value| add_property(key, value) }
        self
      end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          # Returns page content without title if it was extracted.
      #
      def content_without_page_header(content)
        doc = build_document(content)
          if @h1_title
            title = find_header_node(doc)
            title.remove unless title.empty?
          end
        # .inner_html will cause href escaping on UTF-8
        doc.css('div#gollum-root').children.to_xml(@@to_xml)
      end
    end
  end
end

    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
          within_row(1) do
        expect(page).to have_content(order1.number)
      end
    
    module Spree
  module Api
    class BaseController < ActionController::Base
      protect_from_forgery unless: -> { request.format.json? || request.format.xml? }
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
                result = next_service.call(order: spree_current_order)
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
      def auth_session_error(exception)
    Rails.logger.info 'AuthSessionError: #{exception.class}: #{exception.message}'
    redirect_to login_path(:return_to => request.fullpath)
  end
    
      def new
    @credential = @server.credentials.build
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @domain = @server.domains.find_by_uuid!(params[:id])
    else
      params[:id] && @domain = organization.domains.find_by_uuid!(params[:id])
    end
  end
    
      def new
    @route = @server.routes.build
  end
    
    end

    
      def destroy
    @webhook.destroy
    redirect_to_with_json [organization, @server, :webhooks]
  end
    
    task :spec
    
            if presenter
          embeds = { env: env }
          embeds[:version] = env[Grape::Env::API_VERSION] if env[Grape::Env::API_VERSION]
          presented_message = presenter.represent(presented_message, embeds).serializable_hash
        end