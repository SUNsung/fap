
        
            group.remove(moderator)
    group.save
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
      def list
    Homebrew::CLI::Parser.parse do
      switch '--unbrewed'
      switch '--pinned'
      switch '--versions'
      switch '--full-name'
      switch '--multiple', depends_on: '--versions'
      switch :verbose
      # passed through to ls
      switch '-1'
      switch '-l'
      switch '-t'
      switch '-r'
    end
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end
