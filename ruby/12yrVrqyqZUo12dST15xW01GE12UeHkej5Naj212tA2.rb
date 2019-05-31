
        
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
    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
          def jekyll
        JekyllDrop.global
      end
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
        def options
      @options ||= self.class.options.deep_dup.tap do |options|
        options.merge! base_url: base_url, root_url: root_url,
                       root_path: root_path, initial_paths: initial_paths,
                       version: self.class.version, release: self.class.release
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
          def select?(options)
        options.each do |k, v|
          callable = v.respond_to?(:call) ? v : ->(server) { server.fetch(v) }
          result = \
            case k
            when :filter, :select
              callable.call(self)
            when :exclude
              !callable.call(self)
            else
              fetch(k) == v
            end
          return false unless result
        end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
      # Get the contents of the script by a given name.
  #
  # If template_scripts? is set in attributes (often by the --template-scripts
  # flag), then apply it as an ERB template.
  def script(script_name)
    if attributes[:template_scripts?]
      erb = ERB.new(scripts[script_name], nil, '-')
      # TODO(sissel): find the original file name for the file.
      erb.filename = 'script(#{script_name})'
      return erb.result(binding)
    else
      return scripts[script_name]
    end
  end # def script
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
      # wrapper around mknod ffi calls
  def mknod_w(path, mode, dev)
    rc = -1
    case %x{uname -s}.chomp
    when 'Linux'
      # bits/stat.h #define _MKNOD_VER_LINUX  0
      rc = xmknod(0, path, mode, FFI::MemoryPointer.new(dev))
    else
      rc = mknod(path, mode, dev)
    end
    rc
  end