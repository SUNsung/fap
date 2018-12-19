
        
              # Converts the array to a comma-separated sentence where the last element is
      # joined by the connector word. This is the html_safe-aware version of
      # ActiveSupport's {Array#to_sentence}[http://api.rubyonrails.org/classes/Array.html#method-i-to_sentence].
      #
      def to_sentence(array, options = {})
        options.assert_valid_keys(:words_connector, :two_words_connector, :last_word_connector, :locale)
    
              def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
        Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
      def describe_python
    python = which 'python'
    return 'N/A' if python.nil?
    python_binary = Utils.popen_read python, '-c', 'import sys; sys.stdout.write(sys.executable)'
    python_binary = Pathname.new(python_binary).realpath
    if python == python_binary
      python
    else
      '#{python} => #{python_binary}'
    end
  end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
    class PrettyListing
  def initialize(path)
    Pathname.new(path).children.sort_by { |p| p.to_s.downcase }.each do |pn|
      case pn.basename.to_s
      when 'bin', 'sbin'
        pn.find { |pnn| puts pnn unless pnn.directory? }
      when 'lib'
        print_dir pn do |pnn|
          # dylibs have multiple symlinks and we don't care about them
          (pnn.extname == '.dylib' || pnn.extname == '.pc') && !pnn.symlink?
        end
      else
        if pn.directory?
          if pn.symlink?
            puts '#{pn} -> #{pn.readlink}'
          else
            print_dir pn
          end
        elsif Metafiles.list?(pn.basename.to_s)
          puts pn
        end
      end
    end
  end
    
      def shorten_revision(revision)
    Utils.popen_read('git', '-C', HOMEBREW_REPOSITORY, 'rev-parse', '--short', revision).chomp
  end
    
    end

    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
        def release
      context[:release]
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        module MultipleBaseUrls
      def self.included(base)
        base.extend ClassMethods
      end
    
        def format_url(url)
      url.to_s.remove %r{\Ahttps?://}
    end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
                target 'Static' do
                use_frameworks!(false)
            end
            target 'Dynamic' do
                use_frameworks!(true)
            end
        end
    end
end
    
          private
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
            def respond_to_missing?(method, _include_all=false)
          @properties.key?(method) || super
        end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end