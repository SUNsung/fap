
        
        def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
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
    
    module Jekyll
  module Deprecator
    extend self
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def read_file(path)
      File.read(path) rescue nil
    end
  end
end

    
              css('##{dom_id}-methods ~ h4 code').each do |node|
            next unless name = node.content[/\('(\w+)'\)/, 1]
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-method'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (method)'
            entries << [name, id]
          end
        end
    
      def test_has_value2
    ENV.clear
    assert_not_send([ENV, :has_value?, 'foo'])
    ENV['test'] = 'foo'
    assert_send([ENV, :has_value?, 'foo'])
  end
    
        assert_raise(ArgumentError) {
      set.proper_superset?([2])
    }
    
      it 'decodes positive Infinity' do
    '\x7f\x80\x00\x00'.unpack(unpack_format).should == [infinity_value]
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
        it 'propagates inner exception to Thread.join if there is an outer ensure clause' do
      thread = ThreadSpecs.dying_thread_with_outer_ensure(@method) { }
      lambda { thread.join }.should raise_error(RuntimeError, 'In dying thread')
    end
    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
      def remote_url
    object.remote_url.presence
  end
    
      def set_instance_presenter
    @instance_presenter = InstancePresenter.new
  end
    
        it 'removes the remote accounts\'s statuses and media attachments' do
      expect { bad_status1.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_status2.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_attachment.reload }.to raise_exception ActiveRecord::RecordNotFound
    end
  end
    
    class SinatraStaticServer < Sinatra::Base
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
      end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    require 'pathname'
require './plugins/octopress_filters'