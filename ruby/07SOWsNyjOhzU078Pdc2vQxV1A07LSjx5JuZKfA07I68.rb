
        
          # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
        version '3' do
      self.release = '3.3.7'
      self.base_url = 'https://getbootstrap.com/docs/3.3/'
      self.root_path = 'getting-started/'
    
        version '2' do
      self.release = '2.3.0'
      self.base_url = 'http://coffeescript.org/'
    
          options[:fix_urls] = ->(url) do
        url.sub! %r{/blob/master/readme.md}i, ''
        url
      end
    end
    
        options[:max_image_size] = 300_000
    options[:container] = '.devsite-main-content'
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        # Initializes a new CategoryFeed.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'atom.xml'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_includes/custom'), 'category_feed.xml')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
    # Multi-line step scoper
When /^(.*) within (.*[^:]):$/ do |step, parent, table_or_string|
  with_scope(parent) { When '#{step}:', table_or_string }
end
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
          class HaveAttachedFileMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
            protected
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end
