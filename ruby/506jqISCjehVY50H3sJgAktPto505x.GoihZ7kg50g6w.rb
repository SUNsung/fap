
        
                if entries.empty?
          css('.quickindex[id]').each do |node|
            name = node['id'].remove(/quickindex\.?/)
            next if name.empty? || name =~ /\.\d+\z/ || name =~ /\A([^\.]+)\.\1\z/
            entries << ['#{self.name}.#{name}', name]
          end
        end
    
          html_filters.push 'coffeescript/clean_html_v1', 'coffeescript/entries_v1', 'title'
    
        version '1.5' do
      self.release = '1.5.3'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        version do
      self.release = '10.1.0'
      self.base_url = 'https://nodejs.org/dist/latest-v10.x/docs/api/'
    end
    
    module Docs
  class Tensorflow < UrlScraper
    self.name = 'TensorFlow'
    self.type = 'tensorflow'
    self.release = '1.8'
    self.root_path = 'index.html'
    self.links = {
      home: 'https://www.tensorflow.org/',
      code: 'https://github.com/tensorflow/tensorflow'
    }
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        def initialize
      @pages = {}
    end
    
      # Equivalent to Set#flatten, but replaces the receiver with the
  # result in place.  Returns nil if no modifications were made.
  def flatten!
    replace(flatten()) if any? { |e| e.is_a?(Set) }
  end
    
        base = @cls[ 1 => 'one', '2' => false, true => 'true', 'cat' => 99 ]
    h1   = @cls[ '2' => false, 'cat' => 99 ]
    h2   = @cls[ 1 => 'one', true => 'true' ]
    h3   = @cls[ 1 => 'one', true => 'true', 'cat' => 99 ]
    
      class SubclassX
    attr_reader :key
    def initialize(*)
      @key = :value
      super
    end
  end
end

    
      def self.running_thread
    Thread.new do
      begin
        ThreadSpecs.state = :running
        loop { Thread.pass }
        ScratchPad.record :woken
      rescue Object => e
        ScratchPad.record e
      end
    end
  end
    
      # This case occurred in JRuby where native threads are used to provide
  # the same behavior as MRI green threads. Key to this issue was the fact
  # that the thread which called #exit in its block was also being explicitly
  # sent #join from outside the thread. The 100.times provides a certain
  # probability that the deadlock will occur. It was sufficient to reliably
  # reproduce the deadlock in JRuby.
  it 'does not deadlock when called from within the thread while being joined from without' do
    100.times do
      t = Thread.new { Thread.stop; Thread.current.send(@method) }
      Thread.pass while t.status and t.status != 'sleep'
      t.wakeup.should == t
      t.join.should == t
    end
  end
end

    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    module Jekyll
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end