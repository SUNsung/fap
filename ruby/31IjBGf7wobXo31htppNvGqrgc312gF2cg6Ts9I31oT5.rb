
        
        [
  [Badge::Promoter, 'Promoter', BadgeType::Bronze, 1, 0],
  [Badge::Campaigner, 'Campaigner', BadgeType::Silver, 3, 1],
  [Badge::Champion, 'Champion', BadgeType::Gold, 5, 2],
].each do |id, name, type, count, trust_level|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.default_icon = 'fa-user-plus'
    b.badge_type_id = type
    b.multiple_grant = false
    b.target_posts = false
    b.show_posts = false
    b.query = BadgeQueries.invite_badge(count, trust_level)
    b.default_badge_grouping_id = BadgeGrouping::Community
    # daily is good enough
    b.trigger = Badge::Trigger::None
    b.auto_revoke = true
    b.system = true
  end
end
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{staff.id}'
      end
    end
  end
end

    
        it 'raises Errno::ENOENT when `exception: true` is given and the specified command does not exist' do
      lambda { @object.system('feature_14386', exception: true) }.should raise_error(Errno::ENOENT)
    end
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
      it 'raises an UncaughtThrowError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(UncaughtThrowError)
  end
    
          def inherited_hash_writer(name)
        class_eval <<-RUBY, __FILE__, __LINE__ + 1
          def set_#{name}(name, value)
            name = name.tr('_', '-')
            @#{name}s[name] = value unless try_set_#{name}(name, value)
          end
    
        # Returns the standard exception backtrace,
    # including the Sass backtrace.
    #
    # @return [Array<String>]
    def backtrace
      return nil if super.nil?
      return super if sass_backtrace.all? {|h| h.empty?}
      sass_backtrace.map do |h|
        '#{h[:filename] || '(sass)'}:#{h[:line]}' +
          (h[:mixin] ? ':in `#{h[:mixin]}'' : '')
      end + super
    end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
      # Integration tests
  gem 'diffy'
  gem 'clintegracon'
    
      def prefix_from_bin(bin_name)
    unless (path = `which #{bin_name}`.strip).empty?
      File.dirname(File.dirname(path))
    end
  end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC