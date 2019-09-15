
        
        require 'rails_helper'
require 'i18n/backend/fallback_locale_list'
    
          if opts[:secret]
        secret_settings << name
      end
    
          it 'should coerce incorrect string to 0' do
        settings.test_setting = 'pie'
        expect(settings.test_setting).to eq(0)
      end
    
      insert_post_timings
  insert_post_replies
  insert_topic_users
  insert_topic_views
  insert_user_actions
  insert_user_options
  insert_user_stats
  insert_user_visits
  insert_draft_sequences
    
      def self.views_thresholds
    results = DB.query(<<~SQL)
      SELECT ranked.bucket * 5 as percentile, MIN(ranked.views) as views
      FROM (
        SELECT NTILE(20) OVER (ORDER BY t.views DESC) AS bucket, t.views
        FROM (
          SELECT views
            FROM topics
           WHERE deleted_at IS NULL
             AND archetype <> 'private_message'
             AND visible = TRUE
        ) t
      ) ranked
      WHERE bucket <= 9
      GROUP BY bucket
    SQL
    
          it 'can set back down to minimum defaults' do
        [:low, :medium, :high].each do |level|
          SiteSetting.set('topic_views_heat_#{level}', 20_000)
          SiteSetting.set('topic_post_like_heat_#{level}', 5.0)
        end
        expect {
          update_settings
        }.to change { UserHistory.count }.by(6)
        expect_default_values
      end
    end
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
      describe '#process_configured_plugins' do
    let(:env) do
      isolated_environment.tap do |e|
        e.box3('base', '1.0', :virtualbox)
        e.vagrantfile(vagrantfile)
      end
    end
    
    describe VagrantPlugins::ProviderVirtualBox::Provider do
  let(:driver){ double('driver') }
  let(:provider){ double('provider', driver: driver) }
  let(:provider_config){ double('provider_config') }
  let(:uid) { '1000' }
  let(:machine){ double('machine', uid: uid, provider: provider, provider_config: provider_config) }
    
              entries << entry
    
          @right_diff_line_number = nil
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          def base_url
        @base_url
      end
    
          def footer_content
        has_footer && @footer.formatted_data
      end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('PG')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)
    
          if page = wiki.paged(name, path, exact = true)
        @page          = page
        @name          = name
        @content       = page.formatted_data
        @upload_dest   = find_upload_dest(path)
    
        scope :from_credit_card, -> { where(source_type: 'Spree::CreditCard') }
    scope :with_state, ->(s) { where(state: s.to_s) }
    # 'offset' is reserved by activerecord
    scope :offset_payment, -> { where('source_type = 'Spree::Payment' AND amount < 0 AND state = 'completed'') }
    
          def currency
        @payment.currency
      end
    
      def self.check_unused_translations
    self.used_translations ||= []
    self.unused_translation_messages = []
    self.unused_translations = []
    load_translations(translations)
    translation_diff = unused_translations - used_translations
    translation_diff.each do |translation|
      Spree.unused_translation_messages << '#{translation} (#{I18n.locale})'
    end
  end
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def update
          authorize! :update, @product_property
    
            def ready
          unless @shipment.ready?
            if @shipment.can_ready?
              @shipment.ready!
            else
              render 'spree/api/v1/shipments/cannot_ready_shipment', status: 422 and return
            end
          end
          respond_with(@shipment, default_template: :show)
        end
    
        before do
      # output a package, use it as the input, set the subject to that input
      # package. This helps ensure that we can write and read packages
      # properly.
      # The target file must not exist.
    
        # If the package output (-p flag) is a directory, write to the default file name
    # but inside that directory.
    if ! package.nil? && File.directory?(package)
      package_file = File.join(package, output.to_s)
    else
      package_file = output.to_s(package)
    end
    
        if attributes[:pear_data_dir]
      logger.info('Setting data_dir', :data_dir => attributes[:pear_data_dir])
      safesystem('pear', '-c', config, 'config-set', 'data_dir', '#{staging_path(installroot)}/#{attributes[:pear_data_dir]}')
    end
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each
    
        begin
      safesystem('#{attributes[:python_bin]} -c 'import pkg_resources'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing a working setuptools module. I tried to find the 'pkg_resources' module but failed.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing pkg_resources module.'
    end
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb