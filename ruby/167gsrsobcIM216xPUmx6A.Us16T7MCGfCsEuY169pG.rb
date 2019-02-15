
        
          it 'no errors without a user' do
    expect(-> { GivenDailyLike.increment_for(nil) }).not_to raise_error
    expect(-> { GivenDailyLike.decrement_for(nil) }).not_to raise_error
  end
    
      UserOption.where(user_id: smoke_user.id).update_all(
    email_direct: false,
    email_digests: false,
    email_private_messages: false,
  )
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
          # Sets a key to the given integer but only if the existing value is
      # smaller than the given value.
      #
      # This method uses a Lua script to ensure the read and write are atomic.
      #
      # raw_key - The key to set.
      # value - The new value for the key.
      # timeout - The key timeout in seconds.
      #
      # Returns true when the key was overwritten, false otherwise.
      def self.write_if_greater(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
        val = Redis::Cache.with do |redis|
          redis
            .eval(WRITE_IF_GREATER_SCRIPT, keys: [key], argv: [value, timeout])
        end
    
              lfs_objects.each do |object|
            yield object
          end
        rescue StandardError => e
          Rails.logger.error('The Lfs import process failed. #{e.message}')
        end
      end
    end
  end
end

    
          def cache_key_iid
        if object.respond_to?(:noteable_id)
          object.noteable_id
        elsif object.respond_to?(:iid)
          object.iid
        else
          raise(
            TypeError,
            'Instances of #{object.class} are not supported'
          )
        end
      end
    end
  end
end

    
          # The method that will be called for traversing through all the objects to
      # import, yielding them to the supplied block.
      def each_object_to_import
        repo = project.import_source
    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
      # Override prefixes to consider the scoped view.
  # Notice we need to check for the request due to a bug in
  # Action Controller tests that forces _prefixes to be
  # loaded before even having a request object.
  #
  # This method should be public as it is in ActionPack
  # itself. Changing its visibility may break other gems.
  def _prefixes #:nodoc:
    @_prefixes ||= if self.class.scoped_views? && request && devise_mapping
      ['#{devise_mapping.scoped_path}/#{controller_name}'] + super
    else
      super
    end
  end
    
      def test_returns_success
    Warden.test_mode!
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
              record = to_adapter.get(id)
          record if record && record.remember_me?(token, generated_at)
        end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
          # Checks whether this case statement has an `else` branch.
      #
      # @return [Boolean] whether the `case` statement has an `else` branch
      def else?
        loc.else
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
          # Returns the delta between this element's delimiter and the argument's.
      #
      # @note Pairs with different delimiter styles return a delta of 0
      #
      # @return [Integer] the delta between the two delimiters
      def delimiter_delta(other)
        HashElementDelta.new(self, other).delimiter_delta
      end
    
    #######################
# Working with Jekyll #
#######################
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        # Outputs a list of categories as comma-separated <a> links. This is used
    # to output the category list for each post on a category page.
    #
    #  +categories+ is the list of categories to format.
    #
    # Returns string
    #
    def category_links(categories)
      categories.sort.map { |c| category_link c }.join(', ')
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    module Jekyll
  class GistTag < Liquid::Tag
    def initialize(tag_name, text, token)
      super
      @text           = text
      @cache_disabled = false
      @cache_folder   = File.expand_path '../.gist-cache', File.dirname(__FILE__)
      FileUtils.mkdir_p @cache_folder
    end
    
    module OctopressFilters
  def self.pre_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      input = BacktickCodeBlock::render_code_block(page.content)
      page.content = input.gsub /(<figure.+?>.+?<\/figure>)/m do
        TemplateWrapper::safe_wrap($1)
      end
    end
  end
  def self.post_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      page.output = TemplateWrapper::unwrap(page.output)
    end
  end
    
    When /^(?:|I )go to (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
            if args.length > 0
          attachment.to_s(args.first)
        else
          attachment
        end
      end
    end
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end