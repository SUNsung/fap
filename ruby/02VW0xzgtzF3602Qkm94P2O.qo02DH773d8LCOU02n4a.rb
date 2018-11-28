
        
            You can install it using Cask:
    
      def effective_build_options_for(dependent)
    args  = dependent.build.used_options
    args |= Tab.for_formula(dependent).used_options
    BuildOptions.new(args, dependent.options)
  end
    
      private
    
      def query_regexp(query)
    case query
    when %r{^/(.*)/$} then Regexp.new($1)
    else /.*#{Regexp.escape(query)}.*/i
    end
  rescue RegexpError
    odie '#{query} is not a valid regex'
  end
    
        def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
            css('img[style]').each do |node|
          node['align'] ||= node['style'][/float:\s*(left|right)/, 1]
          node['style'] = node['style'].split(';').map(&:strip).select { |s| s =~ /\Awidth|height/ }.join(';')
        end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
      before_action :set_account
  before_action :set_size
  before_action :set_statuses
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
        weeks
  end
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
      ruby_version_is '2.6' do
    it 'raises RuntimeError when `exception: true` is given and the command exits with a non-zero exit status' do
      lambda { @object.system(ruby_cmd('exit 1'), exception: true) }.should raise_error(RuntimeError)
    end
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
        def lotus?
      defined?(::Lotus)
    end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
        private
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
  end
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end