
        
              unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
          # the per_page_dropdown is used on index pages like orders, products, promotions etc.
      # this method generates the select_tag
      def per_page_dropdown
        # there is a config setting for admin_products_per_page, only for the orders page
        if @products && per_page_default = Spree::Config.admin_products_per_page
          per_page_options = []
          5.times do |amount|
            per_page_options << (amount + 1) * Spree::Config.admin_products_per_page
          end
        else
          per_page_default = Spree::Config.admin_orders_per_page
          per_page_options = %w{15 30 45 60}
        end
    
            def create
          authorize! :create, Spree::Order
          if can?(:admin, Spree::Order)
            order_user = if @current_user_roles.include?('admin') && order_params[:user_id]
                           Spree.user_class.find(order_params[:user_id])
                         else
                           current_api_user
                         end
    
    Vagrant.configure('2') do |config|
  # All Vagrant configuration is done here. The most common configuration
  # options are documented and commented below. For a complete reference,
  # please see the online documentation at vagrantup.com.
    
              checksums.keys.each do |path|
            add_path(tar, '/' + path, File.join(staging_path, path))
          end
        end
      end
    end
  end # def output
    
        # Licenses could include more than one.
    # Speaking of just taking the first entry of the field:
    # A crude thing to do, but I suppose it's better than nothing.
    # -- Daniel Haskin, 3/24/2015
    self.license = control['license'][0] || self.license
    
        if attributes[:pear_php_dir]
      logger.info('Setting php_dir', :php_dir => attributes[:pear_php_dir])
      safesystem('pear', '-c', config, 'config-set', 'php_dir', '#{staging_path(installroot)}/#{attributes[:pear_php_dir]}')
    end
    
      def output(output_path)
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
          safesystem('cp', path, './preinstall')
          File.chmod(0755, './preinstall')
        when 'post-install'
          safesystem('cp', path, './postinstall')
          File.chmod(0755, './postinstall')
        when 'pre-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'pre-uninstall is not supported by Solaris packages'
          )
        when 'post-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'post-uninstall is not supported by Solaris packages'
          )
      end # case name
    end # self.scripts.each