
        
              # Can't upload both at apk and aab at same time
      # Need to error out users when there both apks and aabs are detected
      apk_paths = [Supply.config[:apk], Supply.config[:apk_paths]].flatten.compact
      could_upload_apk = !apk_paths.empty? && !Supply.config[:skip_upload_apk]
      could_upload_aab = Supply.config[:aab] && !Supply.config[:skip_upload_aab]
      if could_upload_apk && could_upload_aab
        UI.user_error!('Cannot provide both apk(s) and aab - use `skip_upload_apk`, `skip_upload_aab`, or  make sure to remove any existing .apk or .aab files that are no longer needed')
      end
    end
    
        context 'lazy loading attribute' do
      let(:build) { Spaceship::TestFlight::Build.new('bundleId' => 1, 'appAdamId' => 1) }
      it 'loads TestInfo' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.test_info).to be_instance_of(Spaceship::TestFlight::TestInfo)
      end
      it 'loads BetaReviewInfo' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.beta_review_info).to be_instance_of(Spaceship::TestFlight::BetaReviewInfo)
      end
      it 'loads ExportCompliance' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.export_compliance).to be_instance_of(Spaceship::TestFlight::ExportCompliance)
      end
    end
    
        # Pass a action symbol (e.g. :deliver or :commit_version_bump)
    # and this method will return a reference to the action class
    # if it exists. In case the action with this name can't be found
    # this method will return nil.
    # This method is being called by `trigger_action_by_name` to see
    # if a given action is available (either built-in or loaded from a plugin)
    # and is also being called from the fastlane docs generator
    def class_reference_from_action_name(method_sym)
      method_str = method_sym.to_s.delete('?') # as a `?` could be at the end of the method name
      class_ref = Actions.action_class_ref(method_str)
    
      describe :find_build do
    context 'one build' do
      let(:fake_builds) { make_fake_builds(1) }
      it 'finds the one build' do
        only_build = fake_builds.first
        expect(review_submitter.find_build(fake_builds)).to eq(only_build)
      end
    end
    
          def xcodebuild_log_path(device_type: nil, language: nil, locale: nil)
        name_components = [Snapshot.project.app_name, Snapshot.config[:scheme]]
    
          def self.details
        [
          'This action will return the current build number set on your project.',
          'You first have to set up your Xcode project, if you haven't done it already: [https://developer.apple.com/library/ios/qa/qa1827/_index.html](https://developer.apple.com/library/ios/qa/qa1827/_index.html).'
        ].join('\n')
      end
    
      has_one :person, inverse_of: :owner, foreign_key: :owner_id
  has_one :profile, through: :person
    
          def handle_authorization_form(auth)
        if auth
          process_authorization_consent('true')
        else
          request_authorization_consent_form
        end
      end
    
          rescue_from OpenIDConnect::HttpError do |e|
        http_error_page_as_json(e)
      end
    
      rescue_from Diaspora::NotMine do
    render plain: I18n.t('aspect_memberships.destroy.forbidden'), status: 403
  end
end

    
      def aspect_params
    params.require(:aspect).permit(:name, :chat_enabled, :order_id)
  end
end

    
      def contacts_data
    current_user.contacts.mutual.joins(person: :profile)
      .pluck(*%w(contacts.id profiles.first_name profiles.last_name people.diaspora_handle))
      .map {|contact_id, *name_attrs|
        {value: contact_id, name: ERB::Util.h(Person.name_from_attrs(*name_attrs)) }
      }
  end
end

    
        redirect_back fallback_location: root_path
  end
    
        @grouped_unread_notification_counts = {}
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
          def csp_policy
        directives = []
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
    # usage rake new_post[my-new-post] or rake new_post['my new post'] or rake new_post (defaults to 'new-post')
desc 'Begin a new post in #{source_dir}/#{posts_dir}'
task :new_post, :title do |t, args|
  if args.title
    title = args.title
  else
    title = get_stdin('Enter a title for your post: ')
  end
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  mkdir_p '#{source_dir}/#{posts_dir}'
  filename = '#{source_dir}/#{posts_dir}/#{Time.now.strftime('%Y-%m-%d')}-#{title.to_url}.#{new_post_ext}'
  if File.exist?(filename)
    abort('rake aborted!') if ask('#{filename} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
  end
  puts 'Creating new post: #{filename}'
  open(filename, 'w') do |post|
    post.puts '---'
    post.puts 'layout: post'
    post.puts 'title: \'#{title.gsub(/&/,'&amp;')}\''
    post.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M:%S %z')}'
    post.puts 'comments: true'
    post.puts 'categories: '
    post.puts '---'
  end
end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
    
        original.attributes[:snap_yaml] = snap_yaml
        original.output(target)
        input.input(target)
      end
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
    # This provides PHP PEAR package support.
#
# This provides input support, but not output support.
class FPM::Package::PEAR < FPM::Package
  option '--package-name-prefix', 'PREFIX',
    'Name prefix for pear package', :default => 'php-pear'
    
    
    
      option '--downcase-name', :flag, 'Should the target package name be in ' \
    'lowercase?', :default => true
  option '--downcase-dependencies', :flag, 'Should the package dependencies ' \
    'be in lowercase?', :default => true