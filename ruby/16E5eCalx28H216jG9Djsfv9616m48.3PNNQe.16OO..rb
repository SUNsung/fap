
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
              if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
    puts '\nDone.'

    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    When /^I (?:sign|log) in with password '([^']*)'( on the mobile website)?$/ do |password, mobile|
  @me.password = password
  automatic_login
  confirm_login mobile
end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
      end
    
          doc.css('#filecontents').css('h1, h2, h3, h4, h5, h6').each do |h|
        next if h.inner_text.empty?
        h['id'] =
          case h.inner_text
          when 'Referencing Parent Selectors: &'; 'parent-selector'
          when /^Comments:/; 'comments'
          when 'Strings'; 'sass-script-strings'
          when 'Division and /'; 'division-and-slash'
          when /^Subtraction,/; 'subtraction'
          when '& in SassScript'; 'parent-script'
          when '@-Rules and Directives'; 'directives'
          when '@extend-Only Selectors'; 'placeholders'
          when '@extend-Only Selectors'; 'placeholders'
          when '@each'; 'each-directive'
          when 'Multiple Assignment'; 'each-multi-assign'
          when 'Mixin Directives'; 'mixins'
          when /^Defining a Mixin:/; 'defining_a_mixin'
          when /^Including a Mixin:/; 'including_a_mixin'
          when 'Arguments'; 'mixin-arguments'
          when 'Passing Content Blocks to a Mixin'; 'mixin-content'
          else
            h.inner_text.downcase.gsub(/[^a-z _-]/, '').gsub(' ', '_')
          end
      end
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
        # The content passed to this environment. If the content's environment isn't already
    # read-only, it's made read-only.
    #
    # @see BaseEnvironment#content
    #
    # @return {[Array<Sass::Tree::Node>, ReadOnlyEnvironment]?} The content nodes and
    #   the lexical environment of the content block.
    #   Returns `nil` when there is no content in this environment.
    def content
      # Return the cached content from a previous invocation if any
      return @content if @content_cached
      # get the content with a read-write environment from the superclass
      read_write_content = super
      if read_write_content
        tree, env = read_write_content
        # make the content's environment read-only
        if env && !env.is_a?(ReadOnlyEnvironment)
          env = ReadOnlyEnvironment.new(env, env.options)
        end
        @content_cached = true
        @content = [tree, env]
      else
        @content_cached = true
        @content = nil
      end
    end
  end
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
    When /^(?:|I )follow '([^']*)'$/ do |link|
  click_link(link)
end