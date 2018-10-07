
        
                  def name_and_id_index(options)
            if options.key?('index')
              options.delete('index') || ''
            elsif @generate_indexed_names
              @auto_index || ''
            end
          end
    
            layout_definition = \
          case _layout
          when String
            _layout.inspect
          when Symbol
            <<-RUBY
              #{_layout}.tap do |layout|
                return #{default_behavior} if layout.nil?
                unless layout.is_a?(String) || !layout
                  raise ArgumentError, 'Your layout method :#{_layout} returned \#{layout}. It ' \
                    'should have returned a String, false, or nil'
                end
              end
            RUBY
          when Proc
            define_method :_layout_from_proc, &_layout
            protected :_layout_from_proc
            <<-RUBY
              result = _layout_from_proc(#{_layout.arity == 0 ? '' : 'self'})
              return #{default_behavior} if result.nil?
              result
            RUBY
          when false
            nil
          when true
            raise ArgumentError, 'Layouts must be specified as a String, Symbol, Proc, false, or nil'
          when nil
            name_clause
          end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
            file_is_stale = if PkgVersion === version
          f.pkg_version > version
        else
          f.version > version
        end
    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
      def filtered_list
    names = if ARGV.named.empty?
      Formula.racks
    else
      ARGV.named.map { |n| HOMEBREW_CELLAR+n }.select(&:exist?)
    end
    if ARGV.include? '--pinned'
      pinned_versions = {}
      names.each do |d|
        keg_pin = (HOMEBREW_LIBRARY/'PinnedKegs'/d.basename.to_s)
        if keg_pin.exist? || keg_pin.symlink?
          pinned_versions[d] = keg_pin.readlink.basename.to_s
        end
      end
      pinned_versions.each do |d, version|
        puts '#{d.basename}'.concat(ARGV.include?('--versions') ? ' #{version}' : '')
      end
    else # --versions without --pinned
      names.each do |d|
        versions = d.subdirs.map { |pn| pn.basename.to_s }
        next if ARGV.include?('--multiple') && versions.length < 2
        puts '#{d.basename} #{versions*' '}'
      end
    end
  end
end
    
    Badge.seed do |b|
  b.id = Badge::FirstQuote
  b.name = 'First Quote'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = true
  b.show_posts = true
  b.query = BadgeQueries::FirstQuote
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.trigger = Badge::Trigger::PostRevision
  b.system = true
end
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create