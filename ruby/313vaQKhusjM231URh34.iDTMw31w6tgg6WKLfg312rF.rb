
        
                {% link _methods/yaml_with_dots.md %}
      CONTENT
      create_post(content,
                  'source'           => source_dir,
                  'destination'      => dest_dir,
                  'collections'      => { 'methods' => { 'output' => true } },
                  'read_collections' => true)
    end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
TEXT
    
    CONTENT_CONTAINING = <<-HTML.freeze
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
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Enable locale fallbacks for I18n (makes lookups for any locale fall back to
  # the I18n.default_locale when a translation can not be found).
  config.i18n.fallbacks = true
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
            # Initialize a new instance
        #
        # @param [Sandbox] sandbox @see #sandbox
        # @param [String] path @see #path
        # @param [Array<PodTarget>] pod_targets @see #pod_targets
        # @param [Hash{String=>Symbol}] build_configurations @see #build_configurations
        # @param [Array<Platform>] platforms @see #platforms
        # @param [String] object_version @see #object_version
        # @param [String] podfile_path @see #podfile_path
        #
        def initialize(sandbox, path, pod_targets, build_configurations, platforms,
                       object_version, podfile_path = nil, pod_target_subproject: false)
          @sandbox = sandbox
          @path = path
          @pod_targets = pod_targets
          @build_configurations = build_configurations
          @platforms = platforms
          @object_version = object_version
          @podfile_path = podfile_path
          @pod_target_subproject = pod_target_subproject
        end
    
            it 'does not propagate framework or libraries from a app specification to an aggregate target' do
          target_definition = fixture_target_definition(:contents => { 'inheritance' => 'complete' })
          spec = stub('spec', :library_specification? => false, :spec_type => :app)
          consumer = stub('consumer',
                          :libraries => ['xml2'],
                          :frameworks => ['XCTest'],
                          :weak_frameworks => [],
                          :spec => spec,
                         )
          file_accessor = stub('file_accessor',
                               :spec => spec,
                               :spec_consumer => consumer,
                               :vendored_static_frameworks => [config.sandbox.root + 'StaticFramework.framework'],
                               :vendored_static_libraries => [config.sandbox.root + 'libStaticLibrary.a'],
                               :vendored_static_artifacts => [config.sandbox.root + 'StaticFramework.framework', config.sandbox.root + 'libStaticLibrary.a'],
                               :vendored_dynamic_frameworks => [config.sandbox.root + 'VendoredFramework.framework'],
                               :vendored_dynamic_libraries => [config.sandbox.root + 'VendoredDyld.dyld'],
                              )
          pod_target = stub('pod_target',
                            :file_accessors => [file_accessor],
                            :requires_frameworks? => true,
                            :dependent_targets => [],
                            :recursive_dependent_targets => [],
                            :sandbox => config.sandbox,
                            :include_in_build_config? => true,
                            :should_build? => false,
                            :spec_consumers => [consumer],
                            :build_as_static? => false,
                            :product_basename => 'PodTarget',
                            :target_definitions => [target_definition],
                           )
          pod_target.stubs(:build_settings => pod(pod_target))
          aggregate_target = fixture_aggregate_target([pod_target])
          aggregate(aggregate_target).other_ldflags.should.not.include '-framework'
        end
      end
    
          def spree_dom_id(record)
        dom_id(record, 'spree')
      end
    
      config.fail_fast = ENV['FAIL_FAST'] || false
  config.order = 'random'
end

    
            def inventory_unit_params
          params.require(:inventory_unit).permit(permitted_inventory_unit_attributes)
        end
      end
    end
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
    
              @properties = @properties.page(params[:page]).per(params[:per_page])
          respond_with(@properties)
        end
    
            def taxonomy
          if params[:taxonomy_id].present?
            @taxonomy ||= Spree::Taxonomy.accessible_by(current_ability, :show).find(params[:taxonomy_id])
          end
        end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
    require 'erb'
require 'digest'
require 'tempfile'
require 'paperclip/version'
require 'paperclip/geometry_parser_factory'
require 'paperclip/geometry_detector_factory'
require 'paperclip/geometry'
require 'paperclip/processor'
require 'paperclip/processor_helpers'
require 'paperclip/tempfile'
require 'paperclip/thumbnail'
require 'paperclip/interpolations/plural_cache'
require 'paperclip/interpolations'
require 'paperclip/tempfile_factory'
require 'paperclip/style'
require 'paperclip/attachment'
require 'paperclip/storage'
require 'paperclip/callbacks'
require 'paperclip/file_command_content_type_detector'
require 'paperclip/media_type_spoof_detector'
require 'paperclip/content_type_detector'
require 'paperclip/glue'
require 'paperclip/errors'
require 'paperclip/missing_attachment_styles'
require 'paperclip/validators'
require 'paperclip/logger'
require 'paperclip/helpers'
require 'paperclip/has_attached_file'
require 'paperclip/attachment_registry'
require 'paperclip/filename_cleaner'
require 'paperclip/rails_environment'
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end
    
        # Hash assignment of interpolations. Included only for compatibility,
    # and is not intended for normal use.
    def self.[]= name, block
      define_method(name, &block)
      @interpolators_cache = nil
    end