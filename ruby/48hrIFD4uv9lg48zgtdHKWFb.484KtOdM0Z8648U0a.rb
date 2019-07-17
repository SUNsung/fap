
        
          # localization is fast, but this allows us to avoid
  # calling it in a loop which adds up
  def self.translations
    {
      original_poster: I18n.t(:original_poster),
      most_recent_poster: I18n.t(:most_recent_poster),
      frequent_poster: I18n.t(:frequent_poster)
    }
  end
    
      def list_private_messages_tag(user)
    list = private_messages_for(user, :all)
    list = list.joins('JOIN topic_tags tt ON tt.topic_id = topics.id
                      JOIN tags t ON t.id = tt.tag_id AND t.name = '#{@options[:tags][0]}'')
    create_list(:private_messages, {}, list)
  end
    
          request.env['DISCOURSE_RATE_LIMITERS'] = [limiter10, limiter60]
      request.env['DISCOURSE_ASSET_RATE_LIMITERS'] = [limiter_assets10]
    
        return can_not_modify_automatic if group.automatic
    
            css('pre').each do |node|
          node['data-language'] = 'js'
          node['data-language'] = node['class'][/language-(\w+)/, 1] if node['class']
          node.content = node.content
        end
    
        def normalized_path
      path == '' ? '/' : path
    end
    
            at_css('#module-header').tap do |node|
          heading = at_css('.caption')
          heading.name = 'h1'
          node.before(heading)
          node.before(node.children).remove
        end
    
      describe 'regressions should not occur', :if => program_exists?('rpmbuild') do
    before :each do
      @tempfile_handle =
      @target = Stud::Temporary.pathname
      subject.name = 'name'
      subject.version = '1.23'
    end
    
      describe '#description' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, 'no description given'
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
        if @attributes.include?(:prefix)
      installdir = staging_path(@attributes[:prefix])
    else
      installdir = staging_path
    end
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
    When /^I turn off class caching$/ do
  cd('.') do
    file = 'config/environments/test.rb'
    config = IO.read(file)
    config.gsub!(%r{^\s*config.cache_classes.*$},
                 'config.cache_classes = false')
    File.open(file, 'w'){|f| f.write(config) }
  end
end
    
        # Returns the width and height in a format suitable to be passed to Geometry.parse
    def to_s
      s = ''
      s << width.to_i.to_s if width > 0
      s << 'x#{height.to_i}' if height > 0
      s << modifier.to_s
      s
    end
    
              it 'raise an integrity error' do
            is_expected.to raise_error(CarrierWave::IntegrityError)
          end
        end
    
    Given /^the class has a method called 'reverse' that reverses the contents of a file$/ do
  @klass.class_eval do
    def reverse
      text = File.read(current_path)
      File.open(current_path, 'w') { |f| f.write(text.reverse) }
    end
  end
end
    
          included do
        before :cache, :check_content_type_blacklist!
      end