
        
              spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Use a different cache store in production.
  # config.cache_store = :mem_cache_store
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
        def load_available_plugins
      require 'logstash/plugins/builtin'
    
      # Pipeline settings
  option ['--pipeline.id'], 'ID',
    I18n.t('logstash.runner.flag.pipeline-id'),
    :attribute_name => 'pipeline.id',
    :default => LogStash::SETTINGS.get_default('pipeline.id')
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
    require 'fpm'
require 'tmpdir'
require 'fpm/package/pleaserun'
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}