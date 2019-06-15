
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
      def update
    setting.data = params[:data]
    setting.save!
    
      UPDATE_SIGN_IN_HOURS = 24
    
      UPDATE_SIGN_IN_HOURS = 24
    
        def test_code_around_binding_with_script_lines__
      with_script_lines do |script_lines|
        Tempfile.create('irb') do |f|
          code = 'IRB::WorkSpace.new(binding)\n'
          script_lines[f.path] = code.split(/^/)
    
      def pretty_print(q) # :nodoc:
    q.group 2, '[SpecificFile:', ']' do
      q.breakable
      q.text @path
    end
  end
    
          after do
        @client.close
        @server.close
      end
    
      def test_tailcall_condition_block
    bug = '[ruby-core:78015] [Bug #12905]'
    
      def test_singleton_method_via_eigenclass
    util_parser <<-RUBY
class C
   class << self
     def a() end
   end
end
    RUBY
    
              actual = with_term { IRB::Color.colorize_code(code, complete: false) }
          assert_equal(result, actual, 'Case: colorize_code(#{code.dump}, complete: false)\nResult: #{humanized_literal(actual)}')
        else
          actual = with_term { IRB::Color.colorize_code(code) }
          assert_equal(code, actual)
        end
      end
    end
    
          foo
    
            if specs.size > 0
          specs
        else
          raise LogStash::PluginManager::PluginNotFoundError, 'Cannot find plugins matching: `#{plugin_pattern}`'
        end
      end.flatten
    end
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
      def create
    @broadcast = Broadcast.new(broadcast_params)
    redirect_to '/internal/broadcasts'
  end
    
        def last?
      index == tab.panes.length - 1
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
            windows, _, s0 = Open3.capture3(<<-CMD)
          tmux list-windows -t #{session}\
          -F '#W \#{window_layout} \#{window_active} \#{pane_current_path}'
        CMD
        panes, _, s1 = Open3.capture3(<<-CMD)
          tmux list-panes -s -t #{session} -F '#W \#{pane_current_path}'
        CMD
        tmux_options, _, s2 = Open3.capture3(<<-CMD)
          tmux show-options -t #{session}
        CMD
        project_root = tmux_options[/^default-path '(.+)'$/, 1]