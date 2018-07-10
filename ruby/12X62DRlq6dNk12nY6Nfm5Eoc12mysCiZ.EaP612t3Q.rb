
        
        Then(%r!^I should (not )?see '(.*)' in the build output$!) do |negative, text|
  if negative.nil? || negative.empty?
    expect(jekyll_run_output).to match Regexp.new(text)
  else
    expect(jekyll_run_output).not_to match Regexp.new(text)
  end
end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
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
    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
        # Gets/Sets the extension of this layout.
    attr_accessor :ext
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
    module Homebrew
  def doctor
    checks = Diagnostic::Checks.new
    
    # See chcase for an example
class ScriptFileFormula < Formula
  def install
    bin.install Dir['*']
  end
end
    
    pidfile = ARGV.shift
main(pidfile, ARGV)

    
          html_filters.push 'd3/clean_html', 'd3/entries_v4'
    
        self.name = 'PHP'
    self.type = 'php'
    self.release = '7.2.5'
    self.base_url = 'https://secure.php.net/manual/en/'
    self.root_path = 'index.html'
    self.initial_paths = %w(
      funcref.html
      langref.html
      refs.database.html
      set.mysqlinfo.html
      language.control-structures.html
      reference.pcre.pattern.syntax.html
      reserved.exceptions.html
      reserved.interfaces.html
      reserved.variables.html)
    
        options[:fix_urls] = ->(url) do
      url.sub! %r{(#{Rust.base_url}.+/)\z}, '\1index.html'
      url.sub! '/unicode/u_str', '/unicode/str/'
      url
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
          # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
        # The type of the query (e.g. `'screen'` or `'print'`).
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_type}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :type
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end