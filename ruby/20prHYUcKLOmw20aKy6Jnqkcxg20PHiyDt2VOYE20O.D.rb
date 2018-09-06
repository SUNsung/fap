
        
            s = 'This formula is keg-only, which means it was not symlinked into #{HOMEBREW_PREFIX}.'
    s << '\n\n#{f.keg_only_reason}'
    if f.lib.directory? || f.include.directory?
      s <<
        <<-EOS.undent_________________________________________________________72
    
          Find.prune if @f.skip_clean? path
    
        def self.cleanup_cache
      return unless HOMEBREW_CACHE.directory?
      HOMEBREW_CACHE.children.each do |path|
        if path.to_s.end_with? '.incomplete'
          cleanup_path(path) { path.unlink }
          next
        end
        if path.basename.to_s == 'java_cache' && path.directory?
          cleanup_path(path) { FileUtils.rm_rf path }
          next
        end
        if prune?(path)
          if path.file?
            cleanup_path(path) { path.unlink }
          elsif path.directory? && path.to_s.include?('--')
            cleanup_path(path) { FileUtils.rm_rf path }
          end
          next
        end
    
    group :debugging do
  gem 'cocoapods_debug'
    
        export LANG=en_US.UTF-8
    \e[0m
    DOC
  end
    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
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
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
        # Construct the list of dependencies to add to the current gemfile
    specs.each_with_object([]) do |spec, install_list|
      dependencies = spec.dependencies
        .select { |dep| dep.type == :development }
        .map { |dep| [dep.name] + dep.requirement.as_list }
    
    module LogStash module PluginManager
  class SpecificationHelpers
    WILDCARD = '*'
    WILDCARD_INTO_RE = '.*'
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
            context 'when fetching a gem from rubygems' do