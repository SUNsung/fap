
        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
        def find_all_with_query(query) # :nodoc:
      paths.each do |resolver|
        templates = resolver.find_all_with_query(query)
        return templates unless templates.empty?
      end
    
        formula_deps.each do |dep|
      fixopt(dep) unless dep.opt_prefix.directory?
    end
    
    module Homebrew
  def build_env_keys(env)
    %w[
      CC CXX LD OBJC OBJCXX
      HOMEBREW_CC HOMEBREW_CXX
      CFLAGS CXXFLAGS CPPFLAGS LDFLAGS SDKROOT MAKEFLAGS
      CMAKE_PREFIX_PATH CMAKE_INCLUDE_PATH CMAKE_LIBRARY_PATH CMAKE_FRAMEWORK_PATH
      MACOSX_DEPLOYMENT_TARGET PKG_CONFIG_PATH PKG_CONFIG_LIBDIR
      HOMEBREW_DEBUG HOMEBREW_MAKE_JOBS HOMEBREW_VERBOSE
      HOMEBREW_SVN HOMEBREW_GIT
      HOMEBREW_SDKROOT HOMEBREW_BUILD_FROM_SOURCE
      MAKE GIT CPP
      ACLOCAL_PATH PATH CPATH].select { |key| env.key?(key) }
  end
    
      def caveats
    caveats = []
    begin
      build, f.build = f.build, Tab.for_formula(f)
      s = f.caveats.to_s
      caveats << s.chomp + '\n' if s.length > 0
    ensure
      f.build = build
    end
    caveats << keg_only_text
    caveats << bash_completion_caveats
    caveats << zsh_completion_caveats
    caveats << fish_completion_caveats
    caveats << plist_caveats
    caveats << python_caveats
    caveats << app_caveats
    caveats << elisp_caveats
    caveats.compact.join('\n')
  end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
      def print_dir(root)
    dirs = []
    remaining_root_files = []
    other = ''
    
        renamed_formulae = []
    @report[:D].each do |old_full_name|
      old_name = old_full_name.split('/').last
      new_name = tap.formula_renames[old_name]
      next unless new_name
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
            client.each_page(collection_method, repo, options) do |page|
          # Technically it's possible that the same work is performed multiple
          # times, as Sidekiq doesn't guarantee there will ever only be one
          # instance of a job. In such a scenario it's possible for one job to
          # have a lower page number (e.g. 5) compared to another (e.g. 10). In
          # this case we skip over all the objects until we have caught up,
          # reducing the number of duplicate jobs scheduled by the provided
          # block.
          next unless page_counter.set(page.number)
    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
            # Builds a new PR using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
          def action_name(env)
        if env[CONTROLLER_KEY]
          action_for_rails(env)
        elsif env[ENDPOINT_KEY]
          action_for_grape(env)
        end
      end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers