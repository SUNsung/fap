
        
            def test_migrate_revert_whole_migration
      migration = InvertibleMigration.new
      [LegacyMigration, InvertibleMigration].each do |klass|
        revert = RevertWholeMigration.new(klass)
        migration.migrate :up
        revert.migrate :up
        assert_not migration.connection.table_exists?('horses')
        revert.migrate :down
        assert migration.connection.table_exists?('horses')
        migration.migrate :down
        assert_not migration.connection.table_exists?('horses')
      end
    end
    
          def test_invert_remove_foreign_key_with_on_delete_on_update
        enable = @recorder.inverse_of :remove_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]
        assert_equal [:add_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]], enable
      end
    
    class TestCollections < JekyllUnitTest
  context 'an evil collection' do
    setup do
      @collection = Jekyll::Collection.new(fixture_site, '../../etc/password')
    end
    
          private def_delegator :@obj, :config, :fallback_data
    
    def normalize_bullets(markdown)
  markdown.gsub(%r!\n\s{2}\*{1}!, '\n-')
end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
          importer = ThemeStore::GitImporter.new(ssh_url, private_key: 'private_key')
      importer.import!
    end
    
        unless @topic.topic_allowed_users.where(user_id: @user.id).exists?
      unless @topic.topic_allowed_groups.where('group_id IN (
                                              SELECT group_id FROM group_users where user_id = ?
                                           )', @user.id).exists?
        @topic.topic_allowed_users.create!(user_id: @user.id)
      end
    end
  end
    
        render_json_dump(json, rest_serializer: true)
  end
    
                s3_bucket.expects(:object).with('discourse-uploads/uploads/tombstone/default/original/1X/#{upload.sha1}.png').returns(s3_object)
            s3_object.expects(:copy_from).with(copy_source: 's3-upload-bucket/discourse-uploads/uploads/default/original/1X/#{upload.sha1}.png')
            s3_bucket.expects(:object).with('discourse-uploads/uploads/default/original/1X/#{upload.sha1}.png').returns(s3_object)
            s3_object.expects(:delete)
    
        expect(posts.count).to eq(1)
    expect(posts.first['id']).to eq(post.id)
    
          it 'should still have the correct category' do
        settings.test_setting = 102
        expect(settings.all_settings.find { |s| s[:setting] == :test_setting }[:category]).to eq(:tests)
      end
    end
  end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
              find_instance_method_call(body_node, :man, :+) do |method|
            next unless match = regex_match_group(parameters(method).first, /^man[1-8]$/)
    
              find_method_with_args(body_node, :system, 'xcodebuild') do
            problem %q(use 'xcodebuild *args' instead of 'system 'xcodebuild', *args')
          end
    
        return false if args[:after] && OS::Mac.version < args[:after]
    
        it 'doesn't adds the dependency without OS version requirements' do
      spec.uses_from_macos('foo')
      spec.uses_from_macos('bar' => :head)
    
        context 'with version 1.8' do
      subject { described_class.new(%w[1.8]) }
    
        module CLT
      module_function
    
    require 'cask/cmd/abstract_command'
require 'cask/cmd/--cache'
require 'cask/cmd/audit'
require 'cask/cmd/automerge'
require 'cask/cmd/cat'
require 'cask/cmd/create'
require 'cask/cmd/doctor'
require 'cask/cmd/edit'
require 'cask/cmd/fetch'
require 'cask/cmd/home'
require 'cask/cmd/info'
require 'cask/cmd/install'
require 'cask/cmd/list'
require 'cask/cmd/outdated'
require 'cask/cmd/reinstall'
require 'cask/cmd/style'
require 'cask/cmd/uninstall'
require 'cask/cmd/upgrade'
require 'cask/cmd/zap'
    
    Then(/^the tasks folder is created$/) do
  path = TestApp.test_app_path.join('lib/capistrano/tasks')
  expect(Dir.exist?(path)).to be true
end
    
          def value_or_default
        if response.empty?
          default
        else
          response
        end
      end
    
            if built_in_scm_name?
          load_built_in_scm
        else
          # Compatibility with existing 3.x third-party SCMs
          register_legacy_scm_hooks
          load_legacy_scm_by_name
        end
      end
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
        after(:all) do
      logstash.uninstall
    end
    
          def shipping
        order.ship_total * exchange_multiplier
      end
    
          # the order builds a shipment on its own on transition to delivery, but we want
      # the original exchange shipment, not the built one
      order.shipments.destroy_all
      shipments.each { |shipment| shipment.update(order_id: order.id) }
      order.update!(state: 'confirm')
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
          super
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end