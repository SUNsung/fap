
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
            include ::EachBatch
      end
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Adds a value to a set.
      #
      # raw_key - The key of the set to add the value to.
      # value - The value to add to the set.
      # timeout - The new timeout of the key.
      def self.set_add(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            def collection_method
          :issues_comments
        end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
            # Once we have completed all work we can remove our 'already exists'
        # cache so we don't put too much pressure on Redis.
        #
        # We don't immediately remove it since it's technically possible for
        # other instances of this job to still run, instead we set the
        # expiration time to a lower value. This prevents the other jobs from
        # still scheduling duplicates while. Since all work has already been
        # completed those jobs will just cycle through any remaining pages while
        # not scheduling anything.
        Caching.expire(already_imported_cache_key, 15.minutes.to_i)
    
            expose_attribute :id, :login
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
              # Setup the options hash
          options ||= {}
    
              # Register a new host class only if a name was given
          data[:hosts].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
        # Converts this registry to a hash
    def to_hash
      result = {}
      self.each do |key, value|
        result[key] = value
      end
    
      context 'brew' do
    subject { HOMEBREW_LIBRARY_PATH.parent.parent/'bin/brew' }
    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
          [ scale_geometry, crop_geometry ]
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end