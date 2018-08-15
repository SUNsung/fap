
        
                css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      # #7513
  it 'raises ZeroDivisionError for Rational(0, 1) passed a negative Rational' do
    lambda { Rational(0, 1) ** Rational(-3, 2) }.should raise_error(ZeroDivisionError, 'divided by 0')
  end
    
        line = __LINE__+5
    e = assert_raise(NoMethodError) do
      1.upto 0 do
      end
        .
        foo(
          1,
          2,
        )
    end
    assert_equal(line, e.backtrace_locations[0].lineno)
  end
    
        signature_digest = digests.values.compact.find do |digest|
      digest_name =
        if digest.respond_to? :name then
          digest.name
        else
          digest.class.name[/::([^:]+)\z/, 1]
        end
    
      def util_test_build_gem(gem, gemspec_file, check_licenses=true)
    @cmd.options[:args] = [gemspec_file]
    
            Net::HTTP.start(addr, port) do |http|
          g = Net::HTTP::Get.new(path)
          params = {}
          http.request(g) do |res|
            assert_equal('401', res.code, log.call)
            res['www-authenticate'].scan(DIGESTRES_) do |key, quoted, token|
              params[key.downcase] = token || quoted.delete('\\')
            end
             params['uri'] = 'http://#{addr}:#{port}#{path}'
          end
    
    def with_stderr
  out = err = nil
  begin
    r, w = IO.pipe
    stderr = $stderr.dup
    $stderr.reopen(w)
    w.close
    reader = Thread.start {r.read}
    begin
      out = yield
    ensure
      $stderr.reopen(stderr)
      err = reader.value
    end
  ensure
    w.close rescue nil
    r.close rescue nil
  end
  return out, err
end
    
          result << 0
      condvar.wait(mutex)
      result << 2
      t.join
    end
    assert_equal([0, 1, 2], result)
  end
    
      def test_close
    [->{Queue.new}, ->{SizedQueue.new 3}].each do |qcreate|
      q = qcreate.call
      assert_equal false, q.closed?
      q << :something
      assert_equal q, q.close
      assert q.closed?
      assert_raise_with_message(ClosedQueueError, /closed/){q << :nothing}
      assert_equal q.pop, :something
      assert_nil q.pop
      assert_nil q.pop
      # non-blocking
      assert_raise_with_message(ThreadError, /queue empty/){q.pop(non_block=true)}
    end
  end
    
      private
    
      def gist_logs
    raise FormulaUnspecifiedError if ARGV.resolved_formulae.length != 1
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count