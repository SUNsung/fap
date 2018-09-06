
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
              def add_options(option_tags, options, value = nil)
            if options[:include_blank]
              option_tags = tag_builder.content_tag_string('option', options[:include_blank].kind_of?(String) ? options[:include_blank] : nil, value: '') + '\n' + option_tags
            end
            if value.blank? && options[:prompt]
              tag_options = { value: '' }.tap do |prompt_opts|
                prompt_opts[:disabled] = true if options[:disabled] == ''
                prompt_opts[:selected] = true if options[:selected] == ''
              end
              option_tags = tag_builder.content_tag_string('option', prompt_text(options[:prompt]), tag_options) + '\n' + option_tags
            end
            option_tags
          end
    
    require 'action_view/helpers/tags/checkable'
    
          def exists?(name, prefixes = [], partial = false, keys = [], **options)
        @view_paths.exists?(*args_for_lookup(name, prefixes, partial, keys, options))
      end
      alias :template_exists? :exists?
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
        # Add permissions and a description to the Staff category.
    
    tool_name = File.basename($0)
    
      def active?(key)
    if params.present?
      params.include? key
    else
      key == EventFilter.all
    end
  end
end

    
              # Depending on the attribute, multiple values may
          # be returned. We need only one for username.
          # Ex. `uid` returns only one value but `mail` may
          # return an array of multiple email addresses.
          [username].flatten.first.tap do |username|
            username.downcase! if config.lowercase_usernames
          end
        end
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def value_width
          @status ? 54 : 58
        end
    
            def key_width
          62
        end
    
        set :assets_prefix, 'assets'
    set :assets_path, File.join(public_folder, assets_prefix)
    set :assets_manifest_path, File.join(assets_path, 'manifest.json')
    set :assets_compile, %w(*.png docs.js docs.json application.js application.css application-dark.css)
    
            klass = Class.new(self)
        klass.name = name
        klass.slug = slug
        klass.version = version
        klass.release = release
        klass.links = links
        klass.class_exec(&block)
        @versions ||= []
        @versions << klass
        klass
      end
    
        def absolute_url_string?(str)
      str =~ SCHEME_RGX
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        def options
      @options ||= self.class.options.deep_dup.tap do |options|
        options.merge! base_url: base_url, root_url: root_url,
                       root_path: root_path, initial_paths: initial_paths,
                       version: self.class.version, release: self.class.release
    
            def with_redirections
          @redirections = new.fetch_redirections
          yield
        ensure
          @redirections = nil
        end
      end
    
          def include_default_entry?
        INDEX.add?([name, type].join(';')) ? true : false # ¯\_(ツ)_/¯
      end
    
          ::Sass.load_paths << stylesheets_path
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        # get sha of the branch (= the latest commit)
    def get_branch_sha
      @branch_sha ||= begin
        if @branch + '\n' == %x[git rev-parse #@branch]
          @branch
        else
          cmd = 'git ls-remote #{Shellwords.escape 'https://github.com/#@repo'} #@branch'
          log cmd
          result = %x[#{cmd}]
          raise 'Could not get branch sha!' unless $?.success? && !result.empty?
          result.split(/\s+/).first
        end
      end
    end