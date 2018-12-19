
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    #
    
    module Gitlab
  module QueryLimiting
    # Middleware for reporting (or raising) when a request performs more than a
    # certain amount of database queries.
    class Middleware
      CONTROLLER_KEY = 'action_controller.instance'.freeze
      ENDPOINT_KEY = 'api.endpoint'.freeze
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
            # This returns any automatically detected errors.
        #
        # @return [Array<String>]
        def _detected_errors
          return [] if !@__invalid_methods || @__invalid_methods.empty?
          return [I18n.t('vagrant.config.common.bad_field',
                         fields: @__invalid_methods.to_a.sort.join(', '))]
        end
    
      def page_params
    { page: true, max_id: params[:max_id], min_id: params[:min_id] }.compact
  end
end

    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def hub_lease_seconds
    params['hub.lease_seconds']
  end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
        desc 'List all undocumented methods and classes.'
    task :undocumented do
      opts = ENV['YARD_OPTS'] || ''
      ENV['YARD_OPTS'] = opts.dup + <<OPTS
 --list --tag comment --hide-tag comment --query '
  object.docstring.blank? &&
  !(object.type == :method && object.is_alias?)'
OPTS
      Rake::Task['yard'].execute
    end
    
            line_tabs = line_tab_str.scan(tab_str).size
        if tab_str * line_tabs != line_tab_str
          message = <<END.strip.tr('\n', ' ')
Inconsistent indentation: #{Sass::Shared.human_indentation line_tab_str, true} used for indentation,
but the rest of the document was indented using #{Sass::Shared.human_indentation tab_str}.
END
          raise SyntaxError.new(message, :line => index)
        end
    
        # The name of the mixin in which the error occurred.
    # This could be `nil` if the error occurred outside a mixin.
    #
    # @return [String]
    def sass_mixin
      sass_backtrace.first[:mixin]
    end
    
          opts.on('-v', '--version', 'Print the Sass version.') do
        puts('Sass #{Sass.version[:string]}')
        exit
      end
    end
    
          opts.on('--cache-location PATH',
              'The path to save parsed Sass files. Defaults to .sass-cache.') do |loc|
        @options[:for_engine][:cache_location] = loc
      end
    
            # TODO: this preserves historical behavior, but it's possible
        # :filename should be either normalized to the native format
        # or consistently URI-format.
        full_filename = full_filename.tr('\\', '/') if Sass::Util.windows?
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    desc 'list of authors'
task :authors, [:commit_range, :format, :sep] do |t, a|
  a.with_defaults :format => '%s (%d)', :sep => ', ', :commit_range => '--all'
  authors = Hash.new(0)
  blake   = 'Blake Mizerany'
  overall = 0
  mapping = {
    'blake.mizerany@gmail.com' => blake, 'bmizerany' => blake,
    'a_user@mac.com' => blake, 'ichverstehe' => 'Harry Vangberg',
    'Wu Jiang (nouse)' => 'Wu Jiang' }
  `git shortlog -s #{a.commit_range}`.lines.map do |line|
    line = line.force_encoding 'binary' if line.respond_to? :force_encoding
    num, name = line.split('\t', 2).map(&:strip)
    authors[mapping[name] || name] += num.to_i
    overall += num.to_i
  end
  puts '#{overall} commits by #{authors.count} authors:'
  puts authors.sort_by { |n,c| -c }.map { |e| a.format % e }.join(a.sep)
end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
            close_body(body) if reaction
    
      describe '#random_string' do
    it 'outputs a string of 32 characters' do
      expect(subject.random_string.length).to eq(32)
    end
  end
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
    module Gollum
  VERSION = '4.1.4'